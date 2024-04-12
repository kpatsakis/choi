void fun()
{
  int entity_1 = 49;
  char entity_0 = 'Z';
  char* entity_3;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', entity_1-1);
  entity_7[entity_1-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memcpy(entity_3, entity_7, entity_1*sizeof(char));
}