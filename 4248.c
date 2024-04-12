void fun()
{
  int entity_3 = 30;
  char* entity_8;
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_7[87] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  memset(entity_2, 'W', 2-1);
  entity_2[2-1]='';
  memset(entity_7, 'z', 87-1);
  entity_7[87-1]='';
  strcpy(entity_8, entity_7);
}