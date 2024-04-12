void fun()
{
  int entity_0 = 76;
  char* entity_6;
  char entity_1[29] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_2 = 'R';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[31-1]='';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  memset(entity_1, 'R', 29-1);
  entity_1[29-1]='';
  strcpy(entity_6, entity_1);
}