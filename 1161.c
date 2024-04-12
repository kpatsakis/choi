void fun()
{
  int entity_3 = 39;
  int entity_2 = 97;
  char entity_0[12] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_1 = 'i';
  memset(entity_0, 'o', 12-1);
  entity_0[12-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_0, 12*sizeof(char));
}