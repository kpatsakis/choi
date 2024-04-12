void fun()
{
  int entity_8 = 23;
  int entity_2 = 61;
  char* entity_7;
  char entity_0[entity_2] = "";
  char* entity_9;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'o', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, entity_2*sizeof(char));
}