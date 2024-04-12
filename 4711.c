void fun()
{
  int entity_3 = 58;
  int entity_8 = 49;
  entity_8 = 85;
  char* entity_4;
  char entity_5[7] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'l', 7-1);
  entity_5[7-1]='';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memcpy(entity_2, entity_5, 7*sizeof(char));
}