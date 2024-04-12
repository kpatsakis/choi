void fun()
{
  int entity_5 = 46;
  char* entity_3;
  char entity_1[46] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'R', 46-1);
  entity_1[46-1]='';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[84-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_1, 46*sizeof(char));
}