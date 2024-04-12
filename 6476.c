void fun()
{
  char entity_1 = 'z';
  char* entity_0;
  char entity_7[71] = "";
  entity_7 = NULL;
  char entity_8 = 'E';
  memset(entity_7, 'n', 71-1);
  entity_7[71-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memcpy(entity_0, entity_7, 71*sizeof(char));
}