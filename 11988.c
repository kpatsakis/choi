void fun()
{
  char entity_9[57] = "";
  char* entity_3;
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'C', 57-1);
  entity_9[57-1]='0';
  memcpy(entity_3, entity_9, 57*sizeof(char));
}