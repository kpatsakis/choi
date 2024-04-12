void fun()
{
  int entity_5 = 59;
  int entity_8 = 51;
  char* entity_6;
  char entity_7[64] = "";
  entity_7 = NULL;
  char entity_9 = 'x';
  entity_6 = (char*)malloc(87*sizeof(char));
  entity_6[87-1]='';
  memset(entity_7, 'F', 64-1);
  entity_7[64-1]='';
  strcpy(entity_6, entity_7);
}