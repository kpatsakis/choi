void fun()
{
  int entity_8 = 6;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  memset(entity_7, 'o', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[38] = 'E';
}