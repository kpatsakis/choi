void fun()
{
  char entity_9[66] = "";
  char* entity_4;
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'p', 66-1);
  entity_9[66-1]='0';
  memcpy(entity_4, entity_9, 66*sizeof(char));
}