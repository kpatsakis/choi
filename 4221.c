void fun()
{
  int entity_6 = 70;
  int entity_4 = 85;
  char* entity_3;
  char* entity_1;
  char entity_2[37] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  memset(entity_2, 'n', 37-1);
  entity_2[37-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memcpy(entity_3, entity_2, 37*sizeof(char));
}