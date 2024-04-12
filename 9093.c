void fun()
{
  int entity_5 = 58;
  char entity_3[78] = "";
  entity_3 = NULL;
  char entity_7[71] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_8[56] = "";
  entity_8 = NULL;
  memset(entity_3, 'z', 78-1);
  entity_3[78-1]='';
  memset(entity_7, 'i', 71-1);
  entity_7[71-1]='';
  memset(entity_8, 'A', 56-1);
  entity_8[56-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memcpy(entity_4, entity_3, 78*sizeof(char));
}