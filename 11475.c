void fun()
{
  int entity_9 = 97;
  char entity_3[41] = "";
  char* entity_7;
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'I', 41-1);
  entity_3[41-1]='0';
  strcpy(entity_7, entity_3);
}