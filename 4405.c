void fun()
{
  int entity_5 = 2;
  int entity_7 = 16;
  entity_7 = 34;
  char* entity_2;
  char* entity_0;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  memset(entity_8, 'a', entity_7-1);
  entity_8[entity_7-1]='';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[57-1]='';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}