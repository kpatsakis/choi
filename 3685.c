void fun()
{
  int entity_0 = 77;
  char entity_5[43] = "";
  entity_5 = NULL;
  char entity_7[70] = "";
  entity_7 = NULL;
  char entity_3 = 'l';
  char* entity_8;
  memset(entity_7, 'Y', 70-1);
  entity_7[70-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_5, 'Y', 43-1);
  entity_5[43-1]='';
  memcpy(entity_8, entity_5, 43*sizeof(char));
}