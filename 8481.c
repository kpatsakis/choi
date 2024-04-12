void fun()
{
  int entity_8 = 59;
  int entity_9 = 74;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  memset(entity_7, 'I', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 100;
  entity_7[50] = 't';
}