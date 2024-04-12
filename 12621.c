void fun()
{
  int entity_7 = 60;
  char* entity_6;
  char entity_5[70] = "";
  char entity_4 = 'M';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'j', 70-1);
  entity_5[70-1]='0';
  strcpy(entity_6, entity_5);
}