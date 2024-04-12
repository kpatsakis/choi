void fun()
{
  int entity_2 = 88;
  char entity_3[95] = "";
  char* entity_6;
  memset(entity_3, 'A', 95-1);
  entity_3[95-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_3, 95*sizeof(char));
}