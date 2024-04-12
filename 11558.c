void fun()
{
  char entity_0 = 'l';
  char entity_2[8] = "";
  char* entity_9;
  char entity_4 = 'k';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'O', 8-1);
  entity_2[8-1]='0';
  memcpy(entity_9, entity_2, 8*sizeof(char));
}