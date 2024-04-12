void fun()
{
  char entity_0[37] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_2;
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[18-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_0, 'o', 37-1);
  entity_0[37-1]='';
  strcpy(entity_4, entity_0);
}