void fun()
{
  int entity_4 = 12;
  char* entity_7;
  char entity_2[11] = "";
  memset(entity_2, 'e', 11-1);
  entity_2[11-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  entity_4 = 70;
  memcpy(entity_7, entity_2, 11*sizeof(char));
}