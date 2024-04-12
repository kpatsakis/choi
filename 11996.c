void fun()
{
  int entity_6 = 34;
  char entity_2[85] = "";
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'C', 85-1);
  entity_2[85-1]='0';
  memcpy(entity_5, entity_2, 85*sizeof(char));
}