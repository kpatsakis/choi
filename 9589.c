void fun()
{
  int entity_3 = 40;
  int entity_6 = 70;
  char* entity_5;
  char entity_7[46] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memset(entity_7, 'T', 46-1);
  entity_7[46-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memcpy(entity_5, entity_7, 46*sizeof(char));
}