void fun()
{
  int entity_8 = 28;
  int entity_6 = 2;
  entity_6 = 55;
  char* entity_7;
  char* entity_3;
  char entity_2[24] = "";
  entity_2 = NULL;
  memset(entity_2, 'n', 24-1);
  entity_2[24-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_2, 24*sizeof(char));
}