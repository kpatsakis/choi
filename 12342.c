void fun()
{
  int entity_5 = 100;
  char* entity_2;
  char entity_3[57] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'h', 57-1);
  entity_3[57-1]='0';
  memcpy(entity_2, entity_3, 57*sizeof(char));
}