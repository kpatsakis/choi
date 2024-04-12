void fun()
{
  int entity_9 = 73;
  char* entity_2;
  char entity_5[62] = "";
  memset(entity_5, 'F', 62-1);
  entity_5[62-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, 62*sizeof(char));
}