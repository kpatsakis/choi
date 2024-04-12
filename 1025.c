void fun()
{
  int entity_1 = 17;
  entity_1 = 90;
  char entity_8[88] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_3[7] = "";
  entity_3 = NULL;
  char entity_0[66] = "";
  entity_0 = NULL;
  memset(entity_3, 'w', 7-1);
  entity_3[7-1]='';
  memset(entity_0, 'p', 66-1);
  entity_0[66-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_8, 'c', 88-1);
  entity_8[88-1]='';
  memcpy(entity_4, entity_0, 66*sizeof(char));
}