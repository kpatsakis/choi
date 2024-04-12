void fun()
{
  int entity_6 = 35;
  char entity_8 = 'P';
  char entity_3[70] = "";
  char entity_5[entity_6] = "";
  char* entity_0;
  char entity_1 = 'i';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'I', 70-1);
  entity_3[70-1]='0';
  memset(entity_5, 'j', entity_6-1);
  entity_5[entity_6-1]='0';
  memcpy(entity_0, entity_5, entity_6*sizeof(char));
}