void fun()
{
  int entity_4 = 59;
  entity_4 = 9;
  char entity_5[28] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'f', 28-1);
  entity_5[28-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memcpy(entity_7, entity_5, 28*sizeof(char));
}