void fun()
{
  char entity_6[52] = "";
  char* entity_2;
  memset(entity_6, 'Y', 52-1);
  entity_6[52-1]='0';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}