void fun()
{
  int entity_1 = 66;
  char* entity_2;
  char entity_7[3] = "";
  memset(entity_7, 't', 3-1);
  entity_7[3-1]='0';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, 3*sizeof(char));
}