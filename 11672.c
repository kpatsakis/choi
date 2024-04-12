void fun()
{
  int entity_6 = 5;
  char entity_2[34] = "";
  char* entity_3;
  char* entity_4;
  memset(entity_2, 'S', 34-1);
  entity_2[34-1]='0';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 34*sizeof(char));
}