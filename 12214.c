void fun()
{
  int entity_3 = 69;
  char entity_2[22] = "";
  char* entity_5;
  memset(entity_2, 'i', 22-1);
  entity_2[22-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_2, 22*sizeof(char));
}