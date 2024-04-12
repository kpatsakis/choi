void fun()
{
  int entity_6 = 96;
  char* entity_4;
  char entity_7[2] = "";
  entity_7 = NULL;
  char entity_1[61] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memset(entity_1, 'T', 61-1);
  entity_1[61-1]='';
  memset(entity_7, 'b', 2-1);
  entity_7[2-1]='';
  strcpy(entity_4, entity_7);
}