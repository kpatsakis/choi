void fun()
{
  int entity_8 = 20;
  char entity_0[95] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_4;
  char entity_3 = 'y';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memset(entity_0, 'f', 95-1);
  entity_0[95-1]='';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[85-1]='';
  strcpy(entity_7, entity_0);
}