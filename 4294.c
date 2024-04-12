void fun()
{
  int entity_7 = 82;
  char* entity_8;
  char entity_5[85] = "";
  entity_5 = NULL;
  char entity_6[56] = "";
  entity_6 = NULL;
  char entity_4[92] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 92-1);
  entity_4[92-1]='';
  memset(entity_5, 'M', 85-1);
  entity_5[85-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  memset(entity_6, 'h', 56-1);
  entity_6[56-1]='';
  entity_4[entity_7] = 'Y';
}