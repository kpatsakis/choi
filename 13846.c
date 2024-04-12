void fun()
{
  int entity_8 = 53;
  entity_8 = 66;
  char* entity_7;
  char* entity_1;
  char entity_4[entity_8] = "";
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'G', entity_8-1);
  entity_4[entity_8-1]='0';
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}