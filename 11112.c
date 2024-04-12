void fun()
{
  char* entity_6;
  char entity_9[35] = "";
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'F', 35-1);
  entity_9[35-1]='0';
  memcpy(entity_6, entity_9, 35*sizeof(char));
}