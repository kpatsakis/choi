void fun()
{
  int entity_6 = 20;
  char entity_3[52] = "";
  char* entity_5;
  memset(entity_3, 'p', 52-1);
  entity_3[52-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  entity_6 = 63;
  strcpy(entity_5, entity_3);
}