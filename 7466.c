void fun()
{
  int entity_8 = 52;
  char* entity_3;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_6 = 'Z';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_1, 'S', entity_8-1);
  entity_1[entity_8-1]='';
  memcpy(entity_3, entity_1, entity_8*sizeof(char));
}