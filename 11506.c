void fun()
{
  char entity_6[30] = "";
  char* entity_5;
  char* entity_2;
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'O', 30-1);
  entity_6[30-1]='0';
  memcpy(entity_5, entity_6, 30*sizeof(char));
}