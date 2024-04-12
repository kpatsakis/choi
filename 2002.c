void fun()
{
  int entity_5 = 69;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_6;
  char* entity_8;
  char* entity_4;
  char entity_9 = 'y';
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[92-1]='';
  memset(entity_2, 'P', entity_5-1);
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  memcpy(entity_8, entity_2, entity_5*sizeof(char));
}