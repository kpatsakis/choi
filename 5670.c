void fun()
{
  int entity_1 = 40;
  char* entity_3;
  char entity_7[91] = "";
  entity_7 = NULL;
  char entity_6[80] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'z', 80-1);
  entity_6[80-1]='';
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_7, 'X', 91-1);
  entity_7[91-1]='';
  strcpy(entity_3, entity_6);
}