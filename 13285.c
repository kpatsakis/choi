void fun()
{
  int entity_6 = 23;
  char* entity_7;
  char entity_2[56] = "";
  memset(entity_2, 't', 56-1);
  entity_2[56-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  entity_6 = 72;
  memcpy(entity_7, entity_2, 56*sizeof(char));
}