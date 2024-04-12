void fun()
{
  int entity_2 = 60;
  entity_2 = 9;
  char* entity_3;
  char* entity_7;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'l', 59-1);
  entity_4[59-1]='';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[76-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memcpy(entity_7, entity_4, 59*sizeof(char));
}