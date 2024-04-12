void fun()
{
  int entity_2 = 54;
  char entity_9[2] = "";
  char* entity_3;
  char entity_4[43] = "";
  memset(entity_4, 'M', 43-1);
  entity_4[43-1]='0';
  memset(entity_9, 'g', 2-1);
  entity_9[2-1]='0';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 43*sizeof(char));
}