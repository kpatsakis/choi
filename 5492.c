void fun()
{
  int entity_5 = 33;
  char* entity_1;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', entity_5-1);
  entity_7[entity_5-1]='';
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[76-1]='';
  entity_5 = 92;
  memcpy(entity_1, entity_7, entity_5*sizeof(char));
}