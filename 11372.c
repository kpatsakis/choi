void fun()
{
  char* entity_2;
  char entity_9[72] = "";
  char* entity_3;
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'K', 72-1);
  entity_9[72-1]='0';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 72*sizeof(char));
}