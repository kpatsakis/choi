void fun()
{
  int entity_8 = 59;
  char entity_6[5] = "";
  char* entity_5;
  char entity_2[20] = "";
  memset(entity_6, 'b', 5-1);
  entity_6[5-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'j', 20-1);
  entity_2[20-1]='0';
  strcpy(entity_5, entity_2);
}