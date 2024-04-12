void fun()
{
  int entity_0 = 3;
  int entity_2 = 16;
  char* entity_6;
  char* entity_8;
  char entity_3[56] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'e', 56-1);
  entity_3[56-1]='';
  strcpy(entity_8, entity_3);
}