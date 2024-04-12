void fun()
{
  int entity_1 = 59;
  entity_1 = 50;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  memset(entity_7, 'L', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}