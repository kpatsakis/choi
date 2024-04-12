void fun()
{
  int entity_3 = 64;
  char entity_4[74] = "";
  entity_4 = NULL;
  char entity_9 = 'J';
  char entity_6[24] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'Z', 24-1);
  entity_6[24-1]='';
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memset(entity_4, 'E', 74-1);
  entity_4[74-1]='';
  entity_6[entity_3] = 'O';
}